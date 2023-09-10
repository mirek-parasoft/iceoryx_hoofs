// Copyright (c) 2022 by Apex.AI Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

#include "iox/filesystem.hpp"
#include "iox/log/logstream.hpp"
#include <iostream>

namespace iox
{
template <typename StreamType>
static void outputToStream(StreamType& stream, const char* text, bool& hasPrecedingEntry)
{
    if (hasPrecedingEntry)
    {
        stream << ", ";
    }
    hasPrecedingEntry = true;

    stream << text;
}

template <typename StreamType>
static void finishEntry(StreamType& stream, const bool hasPrecedingEntry, const bool isLastEntry = false)
{
    if (hasPrecedingEntry)
    {
        stream << "}";
    }
    else
    {
        stream << "none}";
    }

    if (!isLastEntry)
    {
        stream << ",  ";
    }
}

template <typename StreamType>
static void printOwnerPermissions(StreamType& stream, const access_rights value)
{
    bool hasPrecedingEntry = false;
    stream << "owner: {";

    if ((value & perms::owner_read) != perms::none)
    {
        outputToStream(stream, "read", hasPrecedingEntry);
    }

    if ((value & perms::owner_write) != perms::none)
    {
        outputToStream(stream, "write", hasPrecedingEntry);
    }

    if ((value & perms::owner_exec) != perms::none)
    {
        outputToStream(stream, "execute", hasPrecedingEntry);
    }

    finishEntry(stream, hasPrecedingEntry);
}

template <typename StreamType>
static void printGroupPermissions(StreamType& stream, const access_rights value)
{
    bool hasPrecedingEntry = false;
    stream << "group: {";

    if ((value & perms::group_read) != perms::none)
    {
        outputToStream(stream, "read", hasPrecedingEntry);
    }

    if ((value & perms::group_write) != perms::none)
    {
        outputToStream(stream, "write", hasPrecedingEntry);
    }

    if ((value & perms::group_exec) != perms::none)
    {
        outputToStream(stream, "execute", hasPrecedingEntry);
    }

    finishEntry(stream, hasPrecedingEntry);
}

template <typename StreamType>
static void printOtherPermissions(StreamType& stream, const access_rights value)
{
    bool hasPrecedingEntry = false;
    stream << "others: {";

    if ((value & perms::others_read) != perms::none)
    {
        outputToStream(stream, "read", hasPrecedingEntry);
    }

    if ((value & perms::others_write) != perms::none)
    {
        outputToStream(stream, "write", hasPrecedingEntry);
    }

    if ((value & perms::others_exec) != perms::none)
    {
        outputToStream(stream, "execute", hasPrecedingEntry);
    }

    finishEntry(stream, hasPrecedingEntry);
}

template <typename StreamType>
static void printSpecialBits(StreamType& stream, const access_rights value)
{
    bool hasPrecedingEntry = false;
    stream << "special bits: {";
    if ((value & perms::set_uid) != perms::none)
    {
        outputToStream(stream, "set_uid", hasPrecedingEntry);
    }

    if ((value & perms::set_gid) != perms::none)
    {
        outputToStream(stream, "set_git", hasPrecedingEntry);
    }

    if ((value & perms::sticky_bit) != perms::none)
    {
        outputToStream(stream, "sticky_bit", hasPrecedingEntry);
    }

    constexpr bool IS_LAST_ENTRY = true;
    finishEntry(stream, hasPrecedingEntry, IS_LAST_ENTRY);
}

template <typename StreamType>
void printAccessControl(StreamType& stream, const access_rights value) noexcept
{
    if (value == perms::unknown)
    {
        stream << "unknown permissions";
        return;
    }

    printOwnerPermissions(stream, value);
    printGroupPermissions(stream, value);
    printOtherPermissions(stream, value);
    printSpecialBits(stream, value);
}

std::ostream& operator<<(std::ostream& stream, const access_rights value) noexcept
{
    printAccessControl(stream, value);
    return stream;
}

iox::log::LogStream& operator<<(iox::log::LogStream& stream, const access_rights value) noexcept
{
    printAccessControl(stream, value);
    return stream;
}
} // namespace iox

/*
 * Copyright (C) 2019 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <shared/linux/process_spec.h>

namespace mp = multipass;
namespace mpl = multipass::logging;

// Create Process with these fixed arguments. Other optional arguments can be appended in Process::start()
QStringList mp::ProcessSpec::arguments() const
{
    return QStringList();
}

// Set environment of child as that of this process
QProcessEnvironment mp::ProcessSpec::environment() const
{
    return QProcessEnvironment::systemEnvironment();
}

// Specify working directory of process
QString mp::ProcessSpec::working_directory() const
{
    return QString();
}

// Set what multipass logging level the stderr of the child process should have
mpl::Level mp::ProcessSpec::error_log_level() const
{
    return mpl::Level::warning;
}

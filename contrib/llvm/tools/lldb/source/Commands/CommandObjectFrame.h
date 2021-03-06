//===-- CommandObjectFrame.h ------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef liblldb_CommandObjectFrame_h_
#define liblldb_CommandObjectFrame_h_

// C Includes
// C++ Includes
// Other libraries and framework includes
// Project includes
#include "lldb/Interpreter/Options.h"
#include "lldb/Core/ArchSpec.h"
#include "lldb/Interpreter/CommandObjectMultiword.h"

namespace lldb_private {

//-------------------------------------------------------------------------
// CommandObjectMultiwordFrame
//-------------------------------------------------------------------------

class CommandObjectMultiwordFrame : public CommandObjectMultiword
{
public:

    CommandObjectMultiwordFrame (CommandInterpreter &interpreter);

    virtual
    ~CommandObjectMultiwordFrame ();

};

} // namespace lldb_private

#endif  // liblldb_CommandObjectFrame_h_

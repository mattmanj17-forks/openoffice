/**************************************************************
 * 
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 * 
 *************************************************************/



#ifndef _VCL_CMDEVT_H
#define _VCL_CMDEVT_H

// --------------------
// - CommandVoiceData -
// --------------------

#define DICTATIONCOMMAND_SYSTEM			0x1000
#define DICTATIONCOMMAND_USER			0x2000

#define DICTATIONCOMMAND_UNKNOWN		0x0001
#define DICTATIONCOMMAND_NEWPARAGRAPH	0x0002
#define DICTATIONCOMMAND_NEWLINE		0x0003
#define DICTATIONCOMMAND_BOLD_ON		0x0004
#define DICTATIONCOMMAND_BOLD_OFF		0x0005
#define DICTATIONCOMMAND_ITALIC_ON		0x0006
#define DICTATIONCOMMAND_ITALIC_OFF		0x0007
#define DICTATIONCOMMAND_UNDERLINE_ON	0x0008
#define DICTATIONCOMMAND_UNDERLINE_OFF	0x0009
#define DICTATIONCOMMAND_NUMBERING_ON	0x0010
#define DICTATIONCOMMAND_NUMBERING_OFF	0x0011
#define DICTATIONCOMMAND_TAB			0x0012
#define DICTATIONCOMMAND_LEFT			0x0013
#define DICTATIONCOMMAND_RIGHT			0x0014
#define DICTATIONCOMMAND_UP				0x0015
#define DICTATIONCOMMAND_DOWN			0x0016
#define DICTATIONCOMMAND_UNDO			0x0017
#define DICTATIONCOMMAND_REPEAT			0x0018
#define DICTATIONCOMMAND_DEL			0x0019

#define DICTATIONCOMMAND_COMMANDMODE	(DICTATIONCOMMAND_SYSTEM + 1)
#define DICTATIONCOMMAND_DICTATIONMODE	(DICTATIONCOMMAND_SYSTEM + 2)

#endif // _VCL_CMDEVT_H



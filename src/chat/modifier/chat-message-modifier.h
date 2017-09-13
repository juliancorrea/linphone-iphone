/*
 * chat-message-modifier.h
 * Copyright (C) 2017  Belledonne Communications SARL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

 #ifndef _CHAT_MESSAGE_MODIFIER_H_
 #define _CHAT_MESSAGE_MODIFIER_H_
 
 #include "chat/chat-message.h"
 
 // =============================================================================
 
 LINPHONE_BEGIN_NAMESPACE
 
 class ChatMessageModifier {
 public:
     virtual void encode(LinphonePrivate::ChatMessagePrivate* msg) = 0;
     virtual void decode(LinphonePrivate::ChatMessagePrivate* msg) = 0;
     virtual ~ChatMessageModifier () = default;
 };
 
 LINPHONE_END_NAMESPACE
 
 #endif // ifndef _CHAT_MESSAGE_MODIFIER_H_
 
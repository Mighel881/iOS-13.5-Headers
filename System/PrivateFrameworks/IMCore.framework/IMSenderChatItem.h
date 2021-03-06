/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMSenderChatItem : IMTranscriptChatItem {

	IMHandle* _handle;

}

@property (nonatomic,readonly) IMHandle * handle;              //@synthesize handle=_handle - In the implementation block
-(Class)__ck_chatItemClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IMHandle *)handle;
-(id)_initWithItem:(id)arg1 handle:(id)arg2 ;
@end


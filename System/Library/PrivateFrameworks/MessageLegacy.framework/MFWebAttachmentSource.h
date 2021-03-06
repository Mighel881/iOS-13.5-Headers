/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject {

	MFLock* _attachmentsLock;
	NSMutableDictionary* _attachmentsByURL;

}
+(id)_setOfAllSources;
+(id)allSources;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)removeAttachmentForURL:(id)arg1 ;
-(id)attachmentForURL:(id)arg1 ;
-(BOOL)setAttachment:(id)arg1 forURL:(id)arg2 ;
@end


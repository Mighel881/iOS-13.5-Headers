/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FMFSession;

@interface CNUIFMFFacade : NSObject {

	FMFSession* _fmfSession;

}

@property (nonatomic,readonly) FMFSession * fmfSession;              //@synthesize fmfSession=_fmfSession - In the implementation block
-(id)init;
-(id)initWithFMFSession:(id)arg1 ;
-(void)fetchFriendHandlesWithCompletionHandler:(/*^block*/id)arg1 ;
-(FMFSession *)fmfSession;
@end

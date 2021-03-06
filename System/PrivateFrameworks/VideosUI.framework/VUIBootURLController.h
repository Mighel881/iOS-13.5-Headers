/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface VUIBootURLController : NSObject {

	NSURL* _localAppURL;

}

@property (nonatomic,retain) NSURL * localAppURL;              //@synthesize localAppURL=_localAppURL - In the implementation block
-(id)init;
-(id)initWithLocalAppURL:(id)arg1 ;
-(void)fetchBootURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)localAppURL;
-(void)setLocalAppURL:(NSURL *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface SUAudioPlayerSessionManager : NSObject {

	NSMutableDictionary* _sessions;

}

@property (nonatomic,readonly) NSArray * allSessionURLs; 
+(id)sessionManager;
-(id)init;
-(void)dealloc;
-(id)audioPlayerForURL:(id)arg1 ;
-(void)_audioPlayerStatusChangeNotification:(id)arg1 ;
-(id)endSessionForURL:(id)arg1 ;
-(id)stopAllAudioPlayerSessions;
-(id)startSessionWithURL:(id)arg1 ;
-(NSArray *)allSessionURLs;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>

@protocol BLTDebugObserverWatchKitAppList;
@class BBObserver, NSString;

@interface BLTDebugObserverHolder : NSObject <BBObserverDelegate> {

	BBObserver* _observer;
	id<BLTDebugObserverWatchKitAppList> _wkAppList;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)startWithWKAppList:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
-(id)initWithWKAppList:(id)arg1 ;
@end


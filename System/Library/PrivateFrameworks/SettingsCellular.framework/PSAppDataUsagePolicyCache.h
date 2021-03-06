/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SettingsCellular/SettingsCellular-Structs.h>
@class NSCache;

@interface PSAppDataUsagePolicyCache : NSObject {

	NSCache* _policyCache;
	CTServerConnectionRef _ctServerConnection;

}

@property (nonatomic,retain) NSCache * policyCache;                                 //@synthesize policyCache=_policyCache - In the implementation block
@property (nonatomic,retain) CTServerConnectionRef ctServerConnection;              //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSCache *)policyCache;
-(void)willEnterForeground;
-(id)initPrivate;
-(void)setPolicyCache:(NSCache *)arg1 ;
-(CTServerConnectionRef)ctServerConnection;
-(void)setCtServerConnection:(CTServerConnectionRef)arg1 ;
-(id)usagePolicyFor:(id)arg1 ;
-(BOOL)setCellularUsagePolicy:(id)arg1 forBundle:(id)arg2 ;
-(BOOL)setUsagePoliciesForBundle:(id)arg1 cellular:(BOOL)arg2 wifi:(BOOL)arg3 ;
-(void)handlePolicyChangedNotification;
-(id)fetchUsagePolicyFor:(id)arg1 ;
@end


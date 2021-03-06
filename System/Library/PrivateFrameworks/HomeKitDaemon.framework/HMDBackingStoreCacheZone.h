/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSMutableArray, NSArray;

@interface HMDBackingStoreCacheZone : HMFObject {

	long long _zoneID;
	NSString* _zoneName;
	NSMutableArray* _actualGroups;
	NSMutableArray* _actualShares;

}

@property (retain) NSMutableArray * actualGroups;              //@synthesize actualGroups=_actualGroups - In the implementation block
@property (retain) NSMutableArray * actualShares;              //@synthesize actualShares=_actualShares - In the implementation block
@property (readonly) long long zoneID;                         //@synthesize zoneID=_zoneID - In the implementation block
@property (readonly) NSString * zoneName;                      //@synthesize zoneName=_zoneName - In the implementation block
@property (readonly) NSArray * groups; 
@property (readonly) NSArray * shares; 
-(long long)zoneID;
-(NSString *)zoneName;
-(NSArray *)groups;
-(NSArray *)shares;
-(id)dumpDebug;
-(NSMutableArray *)actualGroups;
-(NSMutableArray *)actualShares;
-(id)initWithZoneID:(long long)arg1 name:(id)arg2 ;
-(void)setActualGroups:(NSMutableArray *)arg1 ;
-(void)setActualShares:(NSMutableArray *)arg1 ;
@end


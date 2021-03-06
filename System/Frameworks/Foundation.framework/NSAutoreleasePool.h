/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSAutoreleasePool : NSObject {

	void* _token;
	void* _reserved3;
	void* _reserved2;
	void* _reserved;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)addObject:(id)arg1 ;
+(void)showPools;
+(void)releaseAllPools;
+(unsigned long long)autoreleasedObjectCount;
+(unsigned long long)topAutoreleasePoolCount;
+(BOOL)autoreleasePoolExists;
+(void)enableRelease:(BOOL)arg1 ;
+(void)enableFreedObjectCheck:(BOOL)arg1 ;
+(unsigned long long)poolCountHighWaterMark;
+(void)setPoolCountHighWaterMark:(unsigned long long)arg1 ;
+(unsigned long long)poolCountHighWaterResolution;
+(void)setPoolCountHighWaterResolution:(unsigned long long)arg1 ;
+(unsigned long long)totalAutoreleasedObjects;
+(void)resetTotalAutoreleasedObjects;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)drain;
@end


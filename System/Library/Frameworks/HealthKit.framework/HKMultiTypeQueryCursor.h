/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, HKQueryAnchor, NSData;

@interface HKMultiTypeQueryCursor : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _sampleQueryDescriptions;
	NSArray* _sortDescriptors;
	HKQueryAnchor* _followingAnchor;
	HKQueryAnchor* _upToAndIncludingAnchor;
	NSArray* _distinctByKeyPaths;
	NSData* _state;

}

@property (nonatomic,copy,readonly) NSArray * sampleQueryDescriptions; 
@property (nonatomic,copy,readonly) NSArray * sortDescriptors; 
@property (nonatomic,copy,readonly) HKQueryAnchor * followingAnchor; 
@property (nonatomic,copy,readonly) HKQueryAnchor * upToAndIncludingAnchor; 
@property (nonatomic,copy,readonly) NSArray * distinctByKeyPaths; 
@property (nonatomic,copy,readonly) NSData * state; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sortDescriptors;
-(NSData *)state;
-(id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 state:(id)arg6 ;
-(NSArray *)sampleQueryDescriptions;
-(HKQueryAnchor *)followingAnchor;
-(HKQueryAnchor *)upToAndIncludingAnchor;
-(NSArray *)distinctByKeyPaths;
@end

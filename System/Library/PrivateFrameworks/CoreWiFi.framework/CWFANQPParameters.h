/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CWFANQPParameters : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _scanResults;
	NSArray* _ANQPElementIDList;
	unsigned long long _maximumCacheAge;

}

@property (nonatomic,copy) NSArray * scanResults;                             //@synthesize scanResults=_scanResults - In the implementation block
@property (nonatomic,copy) NSArray * ANQPElementIDList;                       //@synthesize ANQPElementIDList=_ANQPElementIDList - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCacheAge;              //@synthesize maximumCacheAge=_maximumCacheAge - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setScanResults:(NSArray *)arg1 ;
-(NSArray *)scanResults;
-(NSArray *)ANQPElementIDList;
-(unsigned long long)maximumCacheAge;
-(BOOL)isEqualToANQPParameters:(id)arg1 ;
-(void)setANQPElementIDList:(NSArray *)arg1 ;
-(void)setMaximumCacheAge:(unsigned long long)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TSDContentPath : NSObject {

	NSArray* _contentLocations;

}

@property (nonatomic,copy) NSArray * contentLocations;              //@synthesize contentLocations=_contentLocations - In the implementation block
+(id)contentPathWithLocations:(id)arg1 ;
-(void)dealloc;
-(id)i_contentLocations;
-(void)setContentLocations:(NSArray *)arg1 ;
-(NSArray *)contentLocations;
-(id)contentLocationAtTime:(double)arg1 withTimingFunction:(id)arg2 ;
@end


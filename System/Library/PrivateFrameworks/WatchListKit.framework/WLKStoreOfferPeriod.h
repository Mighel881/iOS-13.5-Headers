/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface WLKStoreOfferPeriod : NSObject {

	NSString* _type;
	NSNumber* _duration;

}

@property (nonatomic,readonly) NSString * type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;              //@synthesize duration=_duration - In the implementation block
-(NSString *)type;
-(id)initWithString:(id)arg1 ;
-(NSNumber *)duration;
-(id)_offerPeriodForString:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSDate;

@interface TAOutgoingRequests : NSObject {

	NSString* _key;
	NSDictionary* _additionalInformation;
	NSDate* _date;

}

@property (nonatomic,copy,readonly) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * additionalInformation;              //@synthesize additionalInformation=_additionalInformation - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                     //@synthesize date=_date - In the implementation block
-(id)description;
-(NSString *)key;
-(NSDate *)date;
-(id)descriptionDictionary;
-(id)initWithRequestKey:(id)arg1 additionalInformation:(id)arg2 date:(id)arg3 ;
-(NSDictionary *)additionalInformation;
@end


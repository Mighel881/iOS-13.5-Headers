/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksAnalytics.framework/StocksAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SAAdDemographic : NSObject {

	int _ageGroup;
	float _ageGroupConfidence;
	int _genderGroup;
	float _genderGroupConfidence;

}

@property (nonatomic,readonly) int ageGroup;                             //@synthesize ageGroup=_ageGroup - In the implementation block
@property (nonatomic,readonly) float ageGroupConfidence;                 //@synthesize ageGroupConfidence=_ageGroupConfidence - In the implementation block
@property (nonatomic,readonly) int genderGroup;                          //@synthesize genderGroup=_genderGroup - In the implementation block
@property (nonatomic,readonly) float genderGroupConfidence;              //@synthesize genderGroupConfidence=_genderGroupConfidence - In the implementation block
-(id)initWithAgeGroup:(int)arg1 ageGroupConfidence:(float)arg2 genderGroup:(int)arg3 genderGroupConfidence:(float)arg4 ;
-(int)ageGroup;
-(float)ageGroupConfidence;
-(int)genderGroup;
-(float)genderGroupConfidence;
@end


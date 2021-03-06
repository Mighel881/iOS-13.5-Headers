/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRadioResponse.h>

@class NSDate, ICRadioStationMetadata, NSArray;

@interface ICRadioGetTracksResponse : ICRadioResponse {

	NSDate* _assetExpirationDate;

}

@property (nonatomic,readonly) ICRadioStationMetadata * stationMetadata; 
@property (nonatomic,readonly) long long tracklistActionType; 
@property (nonatomic,copy,readonly) NSArray * tracks; 
@property (nonatomic,copy,readonly) NSDate * assetExpirationDate;                     //@synthesize assetExpirationDate=_assetExpirationDate - In the implementation block
-(NSArray *)tracks;
-(NSDate *)assetExpirationDate;
-(id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(ICRadioStationMetadata *)stationMetadata;
-(long long)tracklistActionType;
@end


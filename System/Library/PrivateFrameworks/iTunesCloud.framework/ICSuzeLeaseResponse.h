/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSData;

@interface ICSuzeLeaseResponse : NSObject {

	NSDate* _requestDate;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSData * clientData; 
@property (nonatomic,copy,readonly) NSDate * leaseExpirationDate; 
-(NSData *)clientData;
-(NSDate *)leaseExpirationDate;
-(id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 ;
@end


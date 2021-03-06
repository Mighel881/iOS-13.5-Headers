/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface _MultiplatformDonationRecencyInfo : NSObject {

	NSString* _remoteBundleIdentifier;
	NSString* _localBundleIdentifier;
	NSDate* _remoteDonationCreationDate;
	NSDate* _localDonationCreationDate;

}

@property (nonatomic,copy) NSString * remoteBundleIdentifier;                  //@synthesize remoteBundleIdentifier=_remoteBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localBundleIdentifier;                   //@synthesize localBundleIdentifier=_localBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * remoteDonationCreationDate;              //@synthesize remoteDonationCreationDate=_remoteDonationCreationDate - In the implementation block
@property (nonatomic,retain) NSDate * localDonationCreationDate;               //@synthesize localDonationCreationDate=_localDonationCreationDate - In the implementation block
-(NSString *)remoteBundleIdentifier;
-(NSString *)localBundleIdentifier;
-(id)identifierForMostRecentData;
-(void)setRemoteBundleIdentifier:(NSString *)arg1 ;
-(void)setLocalBundleIdentifier:(NSString *)arg1 ;
-(NSDate *)remoteDonationCreationDate;
-(void)setRemoteDonationCreationDate:(NSDate *)arg1 ;
-(NSDate *)localDonationCreationDate;
-(void)setLocalDonationCreationDate:(NSDate *)arg1 ;
@end


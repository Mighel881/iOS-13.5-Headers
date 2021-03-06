/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPersonalizationFeature.h>

@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature {

	NSString* _lengthID;

}

@property (nonatomic,retain) NSString * lengthID;              //@synthesize lengthID=_lengthID - In the implementation block
+(id)shortLengthFeature;
+(id)mediumLengthFeature;
+(id)longLengthFeature;
-(id)init;
-(double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2 ;
-(id)initWithPersonalizationIdentifier:(id)arg1 ;
-(id)fr_description;
-(id)initWithLengthIdentifier:(id)arg1 ;
-(void)setLengthID:(NSString *)arg1 ;
-(NSString *)lengthID;
@end


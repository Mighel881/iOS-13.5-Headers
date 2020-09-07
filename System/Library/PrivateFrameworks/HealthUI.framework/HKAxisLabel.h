/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HKAxisLabel : NSObject {

	NSString* _text;
	id _location;
	long long _labelType;

}

@property (nonatomic,retain) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id location;                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long labelType;              //@synthesize labelType=_labelType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)location;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)labelType;
-(void)setLabelType:(long long)arg1 ;
-(void)setLocation:(id)arg1 ;
@end

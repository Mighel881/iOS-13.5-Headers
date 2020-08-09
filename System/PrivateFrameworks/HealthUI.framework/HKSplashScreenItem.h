/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface HKSplashScreenItem : NSObject {

	NSString* _title;
	NSString* _fullDescription;
	UIImage* _icon;

}

@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * fullDescription;              //@synthesize fullDescription=_fullDescription - In the implementation block
@property (nonatomic,retain) UIImage * icon;                          //@synthesize icon=_icon - In the implementation block
+(id)splashScreenItemWithTitle:(id)arg1 icon:(id)arg2 fullDescription:(id)arg3 ;
+(id)splashScreenItemWithDictionary:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)fullDescription;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setFullDescription:(NSString *)arg1 ;
@end

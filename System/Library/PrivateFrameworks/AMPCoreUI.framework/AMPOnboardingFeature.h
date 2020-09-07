/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface AMPOnboardingFeature : NSObject {

	UIImage* _image;
	NSString* _titleText;
	NSString* _descriptionText;

}

@property (nonatomic,readonly) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
-(UIImage *)image;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(id)initWithImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 ;
@end

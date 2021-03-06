/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentGaussianBlurFilter.h>

@class NSNumber;

@interface OKWidgetContentGaussianBlurFilter : OKWidgetBasicFilter <JSOKWidgetContentGaussianBlurFilter> {

	NSNumber* _inputRadius;

}

@property (nonatomic,retain) NSNumber * inputRadius;              //@synthesize inputRadius=_inputRadius - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputRadius:(id)arg1 ;
-(void)dealloc;
-(id)outputImage;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)inputKeys;
-(id)settingInputRadius;
-(void)setSettingInputRadius:(id)arg1 ;
@end


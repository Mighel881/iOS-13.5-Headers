/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol TSWPTextMagnifierRendererDelegate
@property (nonatomic,readonly) NSString * underlayImageName; 
@property (nonatomic,readonly) NSString * overlayImageName; 
@property (nonatomic,readonly) NSString * maskImageName; 
@required
-(void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(CGContextRef)arg2;
-(BOOL)shouldHideCanvasLayer;
-(NSString *)underlayImageName;
-(NSString *)overlayImageName;
-(NSString *)maskImageName;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage, NSMutableDictionary, UIColor;

@interface UIKeyboardBIUImageGenerator : NSObject {

	BOOL _useButtonShapes;
	UIImage* _biuBoldImage;
	UIImage* _biuItalicImage;
	UIImage* _biuUnderlineImage;
	NSMutableDictionary* _imageCache;
	UIColor* _tintColor;
	UIColor* _normalColor;

}

@property (nonatomic,retain) UIColor * tintColor;                //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * normalColor;              //@synthesize normalColor=_normalColor - In the implementation block
-(id)init;
-(void)_invalidateCache;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)_accessibilitySettingsChanged:(id)arg1 ;
-(void)_drawBIUAtSize:(CGSize)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 underline:(BOOL)arg4 ;
-(void)setNormalColor:(UIColor *)arg1 ;
-(id)BIUImageForBold:(BOOL)arg1 italic:(BOOL)arg2 underline:(BOOL)arg3 ;
-(UIColor *)normalColor;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIScrollView.h>

@protocol NUPageViewControllerScrollViewAccessibilityDelegate;
@interface NUPageViewControllerScrollView : UIScrollView {

	id<NUPageViewControllerScrollViewAccessibilityDelegate> _accessibilityDelegate;

}

@property (assign,nonatomic,__weak) id<NUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(void)setAccessibilityDelegate:(id<NUPageViewControllerScrollViewAccessibilityDelegate>)arg1 ;
-(id<NUPageViewControllerScrollViewAccessibilityDelegate>)accessibilityDelegate;
@end


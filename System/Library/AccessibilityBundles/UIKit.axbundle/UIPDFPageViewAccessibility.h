/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIPDFPageViewAccessibility_super.h>

@interface UIPDFPageViewAccessibility : __UIPDFPageViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(long long)accessibilityLineNumberForPoint:(CGPoint)arg1 ;
-(CGRect)accessibilityFrameForLineNumber:(long long)arg1 ;
-(id)accessibilityContentForLineNumber:(long long)arg1 ;
-(id)accessibilityPageContent;
-(CGPDFPageRef)_axPageRef;
-(id)_axLineSelections;
-(CGPDFSelectionRef)_lineSelectionForSelection:(CGPDFSelectionRef)arg1 ;
@end


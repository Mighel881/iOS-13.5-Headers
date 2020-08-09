/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UICoordinateSpace.h>

@class FBSSceneSettings, UIWindowScene, NSString;

@interface _UIWindowSceneCoordinateSpace : NSObject <UICoordinateSpace> {

	FBSSceneSettings* _effectiveSettings;
	UIWindowScene* _windowScene;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,__weak,readonly) UIWindowScene * windowScene;              //@synthesize windowScene=_windowScene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(UIWindowScene *)windowScene;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)initWithWindowScene:(id)arg1 effectiveSettings:(id)arg2 ;
@end

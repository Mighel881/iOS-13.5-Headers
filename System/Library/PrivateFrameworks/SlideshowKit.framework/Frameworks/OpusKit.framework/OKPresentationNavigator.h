/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPresentationCanvas.h>

@class NSString, NSMutableArray, NSMutableDictionary;

@interface OKPresentationNavigator : OKPresentationCanvas {

	NSString* _className;
	NSMutableArray* _pagesNames;
	NSMutableDictionary* _internalSettings;
	NSMutableDictionary* _internalUserData;

}

@property (nonatomic,copy) NSString * className;                              //@synthesize className=_className - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * pagesNames;              //@synthesize pagesNames=_pagesNames - In the implementation block
+(id)navigatorWithName:(id)arg1 className:(id)arg2 pagesNames:(id)arg3 settings:(id)arg4 userData:(id)arg5 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionary;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
-(id)pages;
-(id)parentPage;
-(void)resolveIfNeeded;
-(id)canvasWithName:(id)arg1 ;
-(id)pageWithName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3 andParent:(id)arg4 ;
-(NSMutableArray *)pagesNames;
-(void)addPageName:(id)arg1 ;
@end


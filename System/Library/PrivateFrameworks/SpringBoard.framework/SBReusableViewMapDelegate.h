/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBReusableViewMapDelegate <NSObject>
@optional
-(id)viewMap:(id)arg1 makeNewViewOfClass:(Class)arg2;
-(BOOL)viewMap:(id)arg1 shouldRecycleView:(id)arg2;

@required
-(unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
-(id)recycledViewsContainerProviderForViewMap:(id)arg1;

@end

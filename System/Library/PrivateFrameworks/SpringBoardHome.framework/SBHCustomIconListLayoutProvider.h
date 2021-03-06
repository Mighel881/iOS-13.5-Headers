/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBIconListLayoutProvider.h>

@protocol SBIconListLayout;
@class NSDictionary;

@interface SBHCustomIconListLayoutProvider : NSObject <SBIconListLayoutProvider> {

	NSDictionary* _listLayouts;
	id<SBIconListLayout> _defaultLayout;

}

@property (nonatomic,copy,readonly) NSDictionary * listLayouts;                 //@synthesize listLayouts=_listLayouts - In the implementation block
@property (nonatomic,readonly) id<SBIconListLayout> defaultLayout;              //@synthesize defaultLayout=_defaultLayout - In the implementation block
-(id)init;
-(id<SBIconListLayout>)defaultLayout;
-(id)layoutForIconLocation:(id)arg1 ;
-(id)initWithListLayouts:(id)arg1 defaultLayout:(id)arg2 ;
-(NSDictionary *)listLayouts;
-(id)initWithListLayouts:(id)arg1 ;
@end


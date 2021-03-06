/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUILibraryDataSource.h>

@class VUIMenuDataSource, NSSet;

@interface VUILibraryMenuDataSource : VUILibraryDataSource {

	VUIMenuDataSource* _menuItems;
	NSSet* _validCategories;

}

@property (nonatomic,retain) VUIMenuDataSource * menuItems;              //@synthesize menuItems=_menuItems - In the implementation block
@property (nonatomic,retain) NSSet * validCategories;                    //@synthesize validCategories=_validCategories - In the implementation block
-(void)setMenuItems:(VUIMenuDataSource *)arg1 ;
-(VUIMenuDataSource *)menuItems;
-(id)initWithValidCategories:(id)arg1 ;
-(NSSet *)validCategories;
-(void)setValidCategories:(NSSet *)arg1 ;
@end


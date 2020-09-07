/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSListController, NDOSpecifierDataSource, NSArray;

@interface NDOACController : NSObject {

	PSListController* _parentViewController;
	NDOSpecifierDataSource* _ndoSpecifierDataSource;

}

@property (nonatomic,retain) NDOSpecifierDataSource * ndoSpecifierDataSource;              //@synthesize ndoSpecifierDataSource=_ndoSpecifierDataSource - In the implementation block
@property (readonly) NSArray * specifiers; 
@property (retain) PSListController * parentViewController;                                //@synthesize parentViewController=_parentViewController - In the implementation block
+(id)sharedController;
-(id)init;
-(PSListController *)parentViewController;
-(void)setParentViewController:(PSListController *)arg1 ;
-(NSArray *)specifiers;
-(void)updateSpecifiersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setNdoSpecifierDataSource:(NDOSpecifierDataSource *)arg1 ;
-(NDOSpecifierDataSource *)ndoSpecifierDataSource;
@end

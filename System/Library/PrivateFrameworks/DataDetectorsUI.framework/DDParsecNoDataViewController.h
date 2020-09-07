/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIView, UILabel, NSString, NSURL;

@interface DDParsecNoDataViewController : UIViewController {

	UIView* _container;
	UILabel* _errorLabel;
	BOOL _inPlatter;
	NSString* _reason;
	NSString* _searchWebQuery;
	NSURL* _altURL;

}

@property (nonatomic,retain) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (retain) NSString * searchWebQuery;                //@synthesize searchWebQuery=_searchWebQuery - In the implementation block
@property (retain) NSURL * altURL;                           //@synthesize altURL=_altURL - In the implementation block
@property (assign,nonatomic) BOOL inPlatter;                 //@synthesize inPlatter=_inPlatter - In the implementation block
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(NSURL *)altURL;
-(void)searchWeb:(id)arg1 ;
-(id)manageDictionariesURL;
-(void)manageDictionaries:(id)arg1 ;
-(NSString *)searchWebQuery;
-(void)setInPlatter:(BOOL)arg1 ;
-(void)setSearchWebQuery:(NSString *)arg1 ;
-(void)setAltURL:(NSURL *)arg1 ;
-(BOOL)inPlatter;
@end

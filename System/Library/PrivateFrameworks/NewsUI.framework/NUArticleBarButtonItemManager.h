/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NUArticleBarButtonItemManagerDelegate;
#import <NewsUI/NewsUI-Structs.h>
@class UIViewController, NUArticleNextButton, UIBarButtonItem;

@interface NUArticleBarButtonItemManager : NSObject {

	id<NUArticleBarButtonItemManagerDelegate> _delegate;
	UIViewController* _viewController;
	NUArticleNextButton* _nextButton;
	UIBarButtonItem* _shareBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	UIBarButtonItem* _nextBarButtonItem;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;                             //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) NUArticleNextButton * nextButton;                                     //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareBarButtonItem;                                   //@synthesize shareBarButtonItem=_shareBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneBarButtonItem;                                    //@synthesize doneBarButtonItem=_doneBarButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * nextBarButtonItem;                                  //@synthesize nextBarButtonItem=_nextBarButtonItem - In the implementation block
@property (assign,nonatomic,__weak) id<NUArticleBarButtonItemManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NUArticleBarButtonItemManagerDelegate>)delegate;
-(void)setDelegate:(id<NUArticleBarButtonItemManagerDelegate>)arg1 ;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(NUArticleNextButton *)nextButton;
-(void)sizeBarButtonItemsForTraitCollection:(id)arg1 ;
-(void)positionBarButtonItemsForTraitCollection:(id)arg1 ;
-(void)applyPageStyleToNextBarButtonItem:(id)arg1 ;
-(void)doNext:(id)arg1 ;
-(CGRect)adjustedFrameForNextArticleButtonForTraitCollection:(id)arg1 ;
-(CGRect)adjustedFrameForDoneBarButtonItemForTraitCollection:(id)arg1 ;
-(UIBarButtonItem *)doneBarButtonItem;
-(CGRect)adjustedFrameForShareBarButtonItemForTraitCollection:(id)arg1 ;
-(UIBarButtonItem *)shareBarButtonItem;
-(id)createShareBarButtonItem;
-(void)setShareBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)createDoneBarButtonItem;
-(void)setDoneBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)createFlexibleSpacerBarButtonItem;
-(UIBarButtonItem *)nextBarButtonItem;
-(void)doShare:(id)arg1 ;
-(void)doDone:(id)arg1 ;
@end


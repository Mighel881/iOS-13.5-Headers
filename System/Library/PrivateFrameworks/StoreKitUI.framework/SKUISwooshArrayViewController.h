/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIMetricsViewController.h>
#import <libobjc.A.dylib/SKUISwooshViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageChildViewController.h>

@protocol SKUIProductPageChildViewControllerDelegate;
@class UIScrollView, SKUIProductPageHeaderViewController, SKUIResourceLoader, SKUIClientContext, SKUIColorScheme, SKUIMetricsController, NSOperationQueue, SSVPlatformRequestOperation, NSMutableArray, NSArray, NSString;

@interface SKUISwooshArrayViewController : UIViewController <SKUIMetricsViewController, SKUISwooshViewControllerDelegate, UIScrollViewDelegate, SKUIProductPageChildViewController> {

	BOOL _askPermission;
	SKUIResourceLoader* _artworkLoader;
	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	id<SKUIProductPageChildViewControllerDelegate> _delegate;
	SKUIProductPageHeaderViewController* _headerViewController;
	SKUIMetricsController* _metricsController;
	NSOperationQueue* _operationQueue;
	SSVPlatformRequestOperation* _platformOperation;
	UIScrollView* _scrollView;
	NSMutableArray* _swooshArtworkLoaders;
	NSArray* _swooshComponents;
	NSMutableArray* _viewControllers;

}

@property (nonatomic,copy) NSArray * swooshComponents;                                                    //@synthesize swooshComponents=_swooshComponents - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SKUIMetricsController * metricsController;                                   //@synthesize metricsController=_metricsController - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                                               //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) BOOL askPermission;                                                          //@synthesize askPermission=_askPermission - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController;                  //@synthesize headerViewController=_headerViewController - In the implementation block
-(void)dealloc;
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUIProductPageChildViewControllerDelegate>)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_scrollView;
-(UIScrollView *)scrollView;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIMetricsController *)metricsController;
-(void)setMetricsController:(SKUIMetricsController *)arg1 ;
-(void)setAskPermission:(BOOL)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(id)activeMetricsController;
-(id)_artworkLoader;
-(id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2 ;
-(void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2 ;
-(void)swooshDidSelectSeeAll:(id)arg1 ;
-(void)_loadMissingItemsIfNecessary;
-(void)_reloadChildViewControllers;
-(void)_addHeaderView;
-(id)_clickEventWithItem:(id)arg1 ;
-(id)_clickEventForSeeAllForViewController:(id)arg1 ;
-(void)_layoutSwooshViews;
-(void)_addMissingItemsWithResponse:(id)arg1 error:(id)arg2 ;
-(id)initWithSwooshComponents:(id)arg1 ;
-(void)loadMissingItemData;
-(BOOL)isSkLoaded;
-(void)setSwooshComponents:(NSArray *)arg1 ;
-(BOOL)askPermission;
-(NSArray *)swooshComponents;
@end

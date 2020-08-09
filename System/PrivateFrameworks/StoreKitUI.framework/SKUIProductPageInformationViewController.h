/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIContentRatingArtworkLoaderObserver.h>

@class SKUIClientContext, SKUIContentRatingArtworkResourceLoader, SKUIProductInformationView, SKUIProductPageItem, SKUIProductPageProductInfo, NSOperationQueue, NSString;

@interface SKUIProductPageInformationViewController : UIViewController <SKUIContentRatingArtworkLoaderObserver> {

	SKUIClientContext* _clientContext;
	SKUIContentRatingArtworkResourceLoader* _contentRatingArtworkLoader;
	SKUIProductInformationView* _informationView;
	SKUIProductPageItem* _item;
	SKUIProductPageProductInfo* _productInfo;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUIProductPageItem * item;                     //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(SKUIProductPageItem *)item;
-(void)loadView;
-(SKUIClientContext *)clientContext;
-(void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3 ;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 ;
-(id)initWithProductInformation:(id)arg1 clientContext:(id)arg2 ;
-(id)_contentRatingResourceLoader;
-(void)_updateLinesWithRatingImage:(id)arg1 ;
-(id)_informationLinesWithProductInfo:(id)arg1 ;
-(id)_informationLinesWithItem:(id)arg1 ratingImage:(id)arg2 ;
@end

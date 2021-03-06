/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AMSUIWebModel.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@class AMSUIWebNavigationBarModel, NSString, AMSUIWebClientContext;

@interface AMSUIWebLoadingPageModel : AMSUIWebModel <AMSUIWebPageProvider> {

	BOOL _disableDelay;
	AMSUIWebNavigationBarModel* _navigationBar;
	NSString* _message;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL disableDelay;                                         //@synthesize disableDelay=_disableDelay - In the implementation block
@property (nonatomic,retain) NSString * message;                                        //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(id)createViewController;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)disableReappearPlaceholder;
-(BOOL)disableDelay;
-(void)setDisableDelay:(BOOL)arg1 ;
@end


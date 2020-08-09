/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString;

@interface ICSiriAddToAccousticHistoryRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	long long _storeItemID;
	NSString* _affiliateIdentifier;

}
-(void)execute;
-(id)initWithRequestContext:(id)arg1 storeItemID:(long long)arg2 affiliateIdentifier:(id)arg3 ;
@end

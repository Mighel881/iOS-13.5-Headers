/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>

@class NSProgress, NSString, NSArray;

@interface FPVendorDefinedActionOperation : FPActionOperation {

	NSProgress* _remoteProgress;
	NSString* _actionIdentifier;
	NSArray* _itemIdentifiers;
	NSString* _domainIdentifier;

}
-(void)cancel;
-(void)actionMain;
-(id)initWithActionIdentifier:(id)arg1 providerDomainID:(id)arg2 itemIdentifiers:(id)arg3 ;
@end


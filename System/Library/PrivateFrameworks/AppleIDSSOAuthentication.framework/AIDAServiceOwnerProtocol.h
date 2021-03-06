/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AIDAServiceOwnerProtocol <NSObject>
@required
+(id)supportedServices;
-(id)initWithAccountStore:(id)arg1;
-(void)signInService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)accountForService:(id)arg1;
-(id)altDSIDForAccount:(id)arg1 service:(id)arg2;
-(id)DSIDForAccount:(id)arg1 service:(id)arg2;
-(id)nameComponentsForAccount:(id)arg1 service:(id)arg2;
-(void)signOutService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;

@end


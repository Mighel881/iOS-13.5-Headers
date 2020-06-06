/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUAutoInstallOperation.h>

@class NSUUID;

@interface SUSUIFakeSUAutoInstallOperation : SUAutoInstallOperation {

	BOOL _cancelled;
	NSUUID* _uuid;

}
-(void)cancel;
-(BOOL)isExpired;
-(BOOL)isCanceled;
-(id)id;
-(id)forecast;
@end

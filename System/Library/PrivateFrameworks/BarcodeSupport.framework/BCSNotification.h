/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BCSAction, NSString, BCSNotificationIcon, NSMutableDictionary, UNNotificationRequest;

@interface BCSNotification : NSObject {

	BCSAction* _action;
	NSString* _identifier;
	BCSNotificationIcon* _attachmentIcon;
	NSMutableDictionary* _localActions;
	int _requestingProcessID;

}

@property (nonatomic,readonly) long long codeType; 
@property (nonatomic,readonly) UNNotificationRequest * request; 
@property (nonatomic,readonly) NSString * identifier; 
@property (assign,nonatomic) int requestingProcessID;                        //@synthesize requestingProcessID=_requestingProcessID - In the implementation block
@property (nonatomic,readonly) BOOL canHandleActionLocally; 
+(id)tempVCardFileURL;
+(id)notificationForAction:(id)arg1 ;
+(id)_tlAlertConfiguration;
-(NSString *)identifier;
-(UNNotificationRequest *)request;
-(id)_title;
-(id)_content;
-(long long)codeType;
-(id)_defaultURL;
-(id)_initWithAction:(id)arg1 ;
-(id)_actionTypeStringForQRCode;
-(id)_actionTypeStringForNFC;
-(BOOL)_shouldRequireUserToPickTargetApp;
-(id)_notificationActionFromActionPickerItem:(id)arg1 ;
-(BOOL)_shouldHandleActionPickerItemLocally:(id)arg1 ;
-(BOOL)canHandleActionLocally;
-(id)_actionDescriptionString;
-(BOOL)_contentIsPreviewable;
-(BOOL)_shouldManuallyRequireAuthenticationForURL:(id)arg1 ;
-(id)_supplementActions;
-(id)_fbOptionsHandlingUnlockIfNecessary;
-(BOOL)shouldHandleBulletinActionWithIdentifier:(id)arg1 ;
-(void)_handleCalendarEventWithICSString:(id)arg1 ;
-(void)_performActionAfterUnlock:(/*^block*/id)arg1 ;
-(void)_handleContactInfo:(id)arg1 ;
-(void)_showAppPickerAlertWithFBOptions:(id)arg1 ;
-(id)_contentExtensionData;
-(id)_attachmentIconURL;
-(BOOL)_shouldScheduleBackgroundActionForLaunchBundleID:(id)arg1 ;
-(id)_orderAppLinkActionsByRecency:(id)arg1 ;
-(id)_pickerLabelForURLActionPickerItem:(id)arg1 ;
-(void)handleActionWithIdentifier:(id)arg1 notificationResponseOriginID:(id)arg2 ;
-(void)didHandleBulletinActionWithIdentifier:(id)arg1 ;
-(int)requestingProcessID;
-(void)setRequestingProcessID:(int)arg1 ;
@end


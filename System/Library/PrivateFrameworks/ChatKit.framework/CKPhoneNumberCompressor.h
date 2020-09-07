/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIFont, NSArray;

@interface CKPhoneNumberCompressor : NSObject {

	NSString* _phoneNumber;
	UIFont* _font;
	double _desiredWidth;
	NSArray* _preferredCompressions;

}

@property (nonatomic,copy) NSString * phoneNumber;                       //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) UIFont * font;                              //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double desiredWidth;                        //@synthesize desiredWidth=_desiredWidth - In the implementation block
@property (nonatomic,copy) NSArray * preferredCompressions;              //@synthesize preferredCompressions=_preferredCompressions - In the implementation block
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(id)_compressPhoneNumberIfFitsInCompressionLevel:(int)arg1 ;
-(NSArray *)preferredCompressions;
-(id)compress;
-(double)desiredWidth;
-(void)setDesiredWidth:(double)arg1 ;
-(void)setPreferredCompressions:(NSArray *)arg1 ;
@end

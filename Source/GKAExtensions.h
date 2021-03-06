#import <Libmacgpg/Libmacgpg.h>

@interface NSDate (GKA_Extension)
- (NSInteger)daysSinceNow;
@end

@interface NSString (GKA_Extension)
- (NSSet *)keyIDs;
- (NSString *)shortKeyID;
- (NSUInteger)lines; //Returns the number of lines;
@end


@interface GPGKey (GKAExtension)
- (NSString *)type;
- (NSString *)longType;
- (NSString *)userIDAndKeyID;
- (NSString *)simpleValidity;
@end

@interface GPGUserID (GKAExtension)
- (BOOL)isUat;
@end

@interface GPGUserIDSignature (GKAExtension)
- (NSString *)type;
@end


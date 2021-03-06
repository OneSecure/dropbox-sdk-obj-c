///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGPaperDocChangeSubscriptionDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperDocChangeSubscriptionDetails` struct.
///
/// Followed/unfollowed Paper doc.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPaperDocChangeSubscriptionDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Event unique identifier.
@property (nonatomic, readonly, copy) NSString *eventUuid;

/// New doc subscription level.
@property (nonatomic, readonly, copy) NSString *dNewSubscriptionLevel;

/// Previous doc subscription level. Might be missing due to historical data
/// gap.
@property (nonatomic, readonly, copy, nullable) NSString *previousSubscriptionLevel;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param eventUuid Event unique identifier.
/// @param dNewSubscriptionLevel New doc subscription level.
/// @param previousSubscriptionLevel Previous doc subscription level. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithEventUuid:(NSString *)eventUuid
            dNewSubscriptionLevel:(NSString *)dNewSubscriptionLevel
        previousSubscriptionLevel:(nullable NSString *)previousSubscriptionLevel;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param eventUuid Event unique identifier.
/// @param dNewSubscriptionLevel New doc subscription level.
///
/// @return An initialized instance.
///
- (instancetype)initWithEventUuid:(NSString *)eventUuid dNewSubscriptionLevel:(NSString *)dNewSubscriptionLevel;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperDocChangeSubscriptionDetails` struct.
///
@interface DBTEAMLOGPaperDocChangeSubscriptionDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPaperDocChangeSubscriptionDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGPaperDocChangeSubscriptionDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperDocChangeSubscriptionDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGPaperDocChangeSubscriptionDetails *)instance;

///
/// Deserializes `DBTEAMLOGPaperDocChangeSubscriptionDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperDocChangeSubscriptionDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGPaperDocChangeSubscriptionDetails`
/// object.
///
+ (DBTEAMLOGPaperDocChangeSubscriptionDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END

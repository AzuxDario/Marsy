# Marsy

Here will be C++ wrapper for [SpaceX API](https://github.com/r-spacex/SpaceX-API).

Marsy is a library that allow you to manage and deserialize data returned by SpaceX-API. Marsy currently support V4 of API.
However, you need to provide implementation of `IConnection` interface, because Marsy doesn't handle internet connection. 

You can use API by provided service classes or you can make your own and use parsers directly.

# What next will be done

Next I'll focus on [queries](https://github.com/r-spacex/SpaceX-API/blob/master/docs/v4/queries.md), which are used in the API. 

# External libraries
 * [JSON](https://github.com/nlohmann/json)
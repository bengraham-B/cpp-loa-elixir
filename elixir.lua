-- local handle = io.popen("elixir elixir/app.exs")
-- local result = handle:read("*a")
-- handle:close()
--
-- print("Result from Elixir")
-- print(result)


function elixir(script)
    local handle = io.popen("elixir " .. script) -- corrected syntax
    local result = handle:read("*a")
    handle:close()

    print("Result from Elixir:")
    print(result)
end

elixir("elixir/app.exs")

